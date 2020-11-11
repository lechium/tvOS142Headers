/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKDURLSessionPool : NSObject {

	int _backgroundSessionConnectionPoolLimit;

}

@property (nonatomic,readonly) int backgroundSessionConnectionPoolLimit; 
+(id)sharedURLSessionPool;
+(id)backgroundSessionConnectionPoolName;
-(id)init;
-(int)backgroundSessionConnectionPoolLimit;
-(void)_updateBackgroundSessionConnectionPoolLimit;
@end
