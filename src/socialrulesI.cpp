/*
 *    Copyright (C) 2020 by YOUR NAME HERE
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
#include "socialrulesI.h"

SocialRulesI::SocialRulesI(GenericWorker *_worker)
{
	worker = _worker;
}


SocialRulesI::~SocialRulesI()
{
}


void SocialRulesI::objectsChanged(const SRObjectSeq  &objectsAffordances, const Ice::Current&)
{
	worker->SocialRules_objectsChanged(objectsAffordances);
}

void SocialRulesI::personalSpacesChanged(const RoboCompSocialNavigationGaussian::SNGPolylineSeq  &intimateSpaces, const RoboCompSocialNavigationGaussian::SNGPolylineSeq  &personalSpaces, const RoboCompSocialNavigationGaussian::SNGPolylineSeq  &socialSpaces, const Ice::Current&)
{
	worker->SocialRules_personalSpacesChanged(intimateSpaces, personalSpaces, socialSpaces);
}

