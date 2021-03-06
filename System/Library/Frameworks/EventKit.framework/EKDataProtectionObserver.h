/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CDBDataProtectionObserver;

@interface EKDataProtectionObserver : NSObject {

	/*^block*/id _stateChangedCallback;
	CDBDataProtectionObserver* _dataProtectionObserver;

}

@property (nonatomic,retain) CDBDataProtectionObserver * dataProtectionObserver;              //@synthesize dataProtectionObserver=_dataProtectionObserver - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                           //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (nonatomic,readonly) BOOL dataIsAccessible; 
+(id)stateChangedNotificationName;
-(id)init;
-(void)setStateChangedCallback:(id)arg1 ;
-(id)stateChangedCallback;
-(BOOL)dataIsAccessible;
-(void)setDataProtectionObserver:(CDBDataProtectionObserver *)arg1 ;
-(void)_dataProtectionStateChanged;
-(CDBDataProtectionObserver *)dataProtectionObserver;
@end

