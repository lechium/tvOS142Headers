/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOETAUpdaterDelegate <NSObject>
@optional
-(void)etaUpdaterRequestCompleted:(id)arg1;

@required
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 etaRoute:(id)arg3;
-(void)etaUpdaterUpdatedETA:(id)arg1;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;

@end

