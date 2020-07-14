/*
 *    Copyright (C)2020 by YOUR NAME HERE
 *
 *    This file is part of RoboComp
 *
 *    RoboComp is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    RoboComp is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with RoboComp.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
       \brief
       @author authorname
*/

// THIS IS AN AGENT

#ifndef SPECIFICWORKER_H
#define SPECIFICWORKER_H

#include <genericworker.h>
#include <innermodel/innermodel.h>

#include <grid.h>
#include <controller.h>
#include <navigation.h>
#include <algorithm>
#include <localPerson.h>
#include <cppitertools/zip.hpp>

using namespace std;

#define USE_QTGUI
#ifdef USE_QTGUI
#include "innerviewer.h"
#endif

class SpecificWorker : public GenericWorker
{

	Q_OBJECT
public:
	SpecificWorker(MapPrx &mprx);
	~SpecificWorker();
	bool setParams(RoboCompCommonBehavior::ParameterList params);

	bool AGMCommonBehavior_activateAgent(const ParameterMap &prs);
	bool AGMCommonBehavior_deactivateAgent();
	ParameterMap AGMCommonBehavior_getAgentParameters();
	StateStruct AGMCommonBehavior_getAgentState();
	void AGMCommonBehavior_killAgent();
	bool AGMCommonBehavior_reloadConfigAgent();
	bool AGMCommonBehavior_setAgentParameters(const ParameterMap &prs);
	int AGMCommonBehavior_uptimeAgent();
	void AGMExecutiveTopic_edgeUpdated(const RoboCompAGMWorldModel::Edge &modification);
	void AGMExecutiveTopic_edgesUpdated(const RoboCompAGMWorldModel::EdgeSequence &modifications);
	void AGMExecutiveTopic_structuralChange(const RoboCompAGMWorldModel::World &w);
	void AGMExecutiveTopic_symbolUpdated(const RoboCompAGMWorldModel::Node &modification);
	void AGMExecutiveTopic_symbolsUpdated(const RoboCompAGMWorldModel::NodeSequence &modifications);
	void AGMExecutiveTopic_selfEdgeAdded(const int nodeid, const string &edgeType, const RoboCompAGMWorldModel::StringDictionary &attributes);
	void AGMExecutiveTopic_selfEdgeDeleted(const int nodeid, const string &edgeType);
	void RCISMousePicker_setPick(const Pick &myPick);
	void SocialRules_objectsChanged(const SRObjectSeq &objectsAffordances);
	void SocialRules_personalSpacesChanged(const RoboCompSocialNavigationGaussian::SNGPolylineSeq &intimateSpaces, const RoboCompSocialNavigationGaussian::SNGPolylineSeq &personalSpaces, const RoboCompSocialNavigationGaussian::SNGPolylineSeq &socialSpaces);

	using InnerPtr = std::shared_ptr<InnerModel>;
#ifdef USE_QTGUI
	using InnerViewerPtr = std::shared_ptr<InnerViewer>;
#endif

public slots:
	void compute();
	void initialize(int period);
	void checkRobotAutoMovState();
	void moveRobot();
	void sendRobotTo();
	void saveToFileB();
	void freePoint();
	void timeoutTimerMethod();
	void timeoutPeriodChanged(double value);
	void forcesSliderChanged(int value = 0);

	//Specification slot methods State Machine
	void sm_compute();
	void sm_initialize();
	void sm_finalize();

	//--------------------
private:
	InnerPtr innerModel;
	std::string action;
	ParameterMap params;

	AGMModel::SPtr worldModel;
	bool active;
	QTimer timeoutTimer;

	vector<int32_t> prev_blockingIDs = {};
	vector<vector<int32_t>> prev_softBlockingIDs = {};

	localPersonsVec totalPersons;
	int prevTimeoutCount = 0;

#ifdef USE_QTGUI
	InnerViewerPtr viewer;
#endif

	std::shared_ptr<RoboCompCommonBehavior::ParameterList> confParams;
	Navigation<Grid<>, Controller> navigation;

	SNGPolylineSeq intimate_seq, personal_seq, social_seq;
	SRObjectSeq objects_seq;

	bool personalSpacesChanged = false;
	bool affordancesChanged = false;

	RoboCompLaser::TLaserData updateLaser();

	using retPersonalSpaces = std::tuple<vector<QPolygonF>, vector<QPolygonF>, vector<QPolygonF>>;
	using retAffordanceSpaces = std::tuple<std::map<float, vector<QPolygonF>>, vector<QPolygonF>, vector<QPolygonF>>;

	void getPersonsFromModel();
	retPersonalSpaces getPolylinesFromModel();
	retAffordanceSpaces getAffordancesFromModel();

	void checkHumanBlock();

	bool setParametersAndPossibleActivation(const ParameterMap &prs, bool &reactivated);
	void sendModificationProposal(AGMModel::SPtr &worldModel, AGMModel::SPtr &newModel);
};

#endif
