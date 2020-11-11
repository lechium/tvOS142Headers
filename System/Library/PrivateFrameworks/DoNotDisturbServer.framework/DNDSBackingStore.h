/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DNDSBackingStore <NSObject>
@property (assign,nonatomic,__weak) id<DNDSBackingStoreDelegate> delegate; 
@required
-(id<DNDSBackingStoreDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)readRecordWithError:(id*)arg1;
-(unsigned long long)writeRecord:(id)arg1 error:(id*)arg2;

@end

