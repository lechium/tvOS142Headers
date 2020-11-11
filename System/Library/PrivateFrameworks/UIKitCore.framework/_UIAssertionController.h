/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIAssertionControllerSubject;
@class NSMutableDictionary;

@interface _UIAssertionController : NSObject {

	NSMutableDictionary* _activeAssertionRecords;
	id<_UIAssertionControllerSubject> _subject;

}

@property (nonatomic,__weak,readonly) id<_UIAssertionControllerSubject> subject;              //@synthesize subject=_subject - In the implementation block
-(id)debugDescription;
-(id<_UIAssertionControllerSubject>)subject;
-(void)_endTrackingAssertion:(id)arg1 ;
-(id)vendAssertionOfType:(unsigned long long)arg1 initialState:(BOOL)arg2 reason:(id)arg3 ;
-(void)_beginTrackingAssertion:(id)arg1 ;
-(void)_enforceSubjectAwarenessOfAssertionState:(BOOL)arg1 forAssertionType:(unsigned long long)arg2 ;
-(id)initWithAssertionSubject:(id)arg1 ;
-(id)vendAssertionOfType:(unsigned long long)arg1 initialState:(BOOL)arg2 ;
@end
