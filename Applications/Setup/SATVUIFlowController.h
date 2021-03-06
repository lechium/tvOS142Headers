//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, TVSKNavigationController;
@protocol TVSKStep;

@interface SATVUIFlowController : NSObject
{
    TVSKNavigationController *_navigationController;	// 8 = 0x8
    NSArray *_flowStepClasses;	// 16 = 0x10
    NSMutableArray *_presentedSteps;	// 24 = 0x18
    NSMutableDictionary *_presentedStepClassesToViewControllers;	// 32 = 0x20
    id <TVSKStep> _lastPresentedStep;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00000001000457fc
- (void).cxx_destruct;	// IMP=0x0000000100046624
@property(retain, nonatomic) id <TVSKStep> lastPresentedStep; // @synthesize lastPresentedStep=_lastPresentedStep;
@property(retain, nonatomic) NSMutableDictionary *presentedStepClassesToViewControllers; // @synthesize presentedStepClassesToViewControllers=_presentedStepClassesToViewControllers;
@property(retain, nonatomic) NSMutableArray *presentedSteps; // @synthesize presentedSteps=_presentedSteps;
@property(copy, nonatomic) NSArray *flowStepClasses; // @synthesize flowStepClasses=_flowStepClasses;
@property(retain, nonatomic) TVSKNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (_Bool)_isPresentableStepAfterCurrentlyActiveStep:(id)arg1;	// IMP=0x00000001000463f0
- (id)_presentedStepClassesToSteps;	// IMP=0x000000010004629c
- (void)_removeAllStepsTillStep:(id)arg1;	// IMP=0x000000010004619c
- (_Bool)_wasStepPresented:(id)arg1;	// IMP=0x0000000100046080
- (void)_configurePresentableStep:(id)arg1 withViewController:(id)arg2;	// IMP=0x0000000100045c98
- (void)popToStepViewControllerForStep:(id)arg1;	// IMP=0x0000000100045afc
- (void)presentStepViewController:(id)arg1 forStep:(id)arg2;	// IMP=0x0000000100045974
- (id)viewControllerForStepClass:(Class)arg1;	// IMP=0x0000000100045940
- (id)initWithNavigationController:(id)arg1 flowStepClasses:(id)arg2;	// IMP=0x0000000100045860

@end

