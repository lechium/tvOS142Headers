/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANAnalyticsAssistantProtocol
@required
-(ANAnalyticsAssistantAudioData*)audioDataForAnnouncement:(id)arg1;
-(ANAnalyticsAssistantSenderData*)senderDataForAnnouncement:(id)arg1;
-(long long)boundGroupCount:(long long)arg1;
-(long long)bucketFromSize:(long long)arg1;
-(long long)bucketFromDuration:(double)arg1;
-(long long)bucketFromReceiveTime:(double)arg1;

@end
