/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEONavigationServerRequestStateXPCInterface <NSObject>
@required
-(void)requestRouteSummary;
-(void)requestTransitSummary;
-(void)requestGuidanceState;
-(void)requestActiveRouteDetailsData;
-(void)requestStepIndex;
-(void)requestStepNameInfo;
-(void)requestRideSelections;
-(void)requestPositionFromSign;
-(void)requestPositionFromManeuver;
-(void)requestPositionFromDestination;
-(void)requestNavigationVoiceVolume;
-(void)requestUpdates;

@end

