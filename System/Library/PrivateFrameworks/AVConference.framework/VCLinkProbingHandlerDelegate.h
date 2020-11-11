/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCLinkProbingHandlerDelegate <NSObject>
@optional
-(void)didUpdateLinkPreferenceOrder:(id)arg1;

@required
-(void)startActiveProbingWithOptions:(id)arg1;
-(void)stopActiveProbingWithOptions:(id)arg1;
-(void)flushLinkProbingStatusWithOptions:(id)arg1;
-(void)queryProbingResultsWithOptions:(id)arg1;

@end
