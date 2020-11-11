//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SAAceCommand, SRAceCommandRecordDelegate;

@interface SRAceCommandRecord : NSObject
{
    id <SAAceCommand> _aceCommand;	// 8 = 0x8
    CDUnknownBlockType _commandCompletion;	// 16 = 0x10
    long long _result;	// 24 = 0x18
    long long _numberOfStartedActions;	// 32 = 0x20
    long long _numberOfSuccessfullyCompletedActions;	// 40 = 0x28
    long long _numberOfUnsuccessfullyCompletedActions;	// 48 = 0x30
    long long _numberOfStoppedActions;	// 56 = 0x38
    id <SRAceCommandRecordDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100092fa8
@property(nonatomic) __weak id <SRAceCommandRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setNumberOfStoppedActions:) long long numberOfStoppedActions; // @synthesize numberOfStoppedActions=_numberOfStoppedActions;
@property(nonatomic, setter=_setNumberOfUnsuccessfullyCompletedActions:) long long numberOfUnsuccessfullyCompletedActions; // @synthesize numberOfUnsuccessfullyCompletedActions=_numberOfUnsuccessfullyCompletedActions;
@property(nonatomic, setter=_setNumberOfSuccessfullyCompletedActions:) long long numberOfSuccessfullyCompletedActions; // @synthesize numberOfSuccessfullyCompletedActions=_numberOfSuccessfullyCompletedActions;
@property(nonatomic, setter=_setNumberOfStartedActions:) long long numberOfStartedActions; // @synthesize numberOfStartedActions=_numberOfStartedActions;
@property(nonatomic, setter=_setResult:) long long result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType commandCompletion; // @synthesize commandCompletion=_commandCompletion;
@property(readonly, nonatomic) id <SAAceCommand> aceCommand; // @synthesize aceCommand=_aceCommand;
- (void)incrementNumberOfUnsuccessfullyCompletedActions;	// IMP=0x0000000100092eec
- (void)incrementNumberOfSuccessfullyCompletedActions;	// IMP=0x0000000100092a30
- (void)incrementNumberOfStoppedActions;	// IMP=0x00000001000929f8
- (void)incrementNumberOfStartedActions;	// IMP=0x00000001000929c0
- (id)initWithAceCommand:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100092898

@end

