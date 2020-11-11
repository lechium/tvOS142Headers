/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PHImageManagerRequestTracer : NSObject
+(void)initialize;
+(id)_currentTimestampString;
+(void)_inq_recordRequestID:(long long)arg1 ;
+(void)_inq_trimToMostRecentImageManagerMessages;
+(int)requestIDFromTaskIdentifier:(id)arg1 ;
+(void)registerRequestID:(int)arg1 withAssetUUID:(id)arg2 ;
+(void)traceMessageForRequestID:(int)arg1 message:(id)arg2 ;
+(id)recentMessagesSummaryForAssetUUID:(id)arg1 ;
+(void)setTracingDisabled:(BOOL)arg1 ;
@end

