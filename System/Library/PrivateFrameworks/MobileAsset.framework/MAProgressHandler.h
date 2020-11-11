/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface MAProgressHandler : NSObject {

	unsigned long long _notificationInterval;
	NSMutableArray* _callBackArray;

}

@property (assign,nonatomic) unsigned long long notificationInterval;              //@synthesize notificationInterval=_notificationInterval - In the implementation block
@property (nonatomic,readonly) NSMutableArray * callBackArray;                     //@synthesize callBackArray=_callBackArray - In the implementation block
-(void)dealloc;
-(void)addCallBack:(/*^block*/id)arg1 ;
-(id)initWithCallBack:(/*^block*/id)arg1 ;
-(unsigned long long)notificationInterval;
-(void)setNotificationInterval:(unsigned long long)arg1 ;
-(NSMutableArray *)callBackArray;
@end
