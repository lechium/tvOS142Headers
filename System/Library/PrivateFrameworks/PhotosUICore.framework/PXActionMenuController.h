/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXActionPerformerDelegate.h>

@class NSArray, NSSet, UIAlertController, NSString;

@interface PXActionMenuController : NSObject <PXActionPerformerDelegate> {

	BOOL _actionsNeedsUpdate;
	NSArray* _alertActions;
	NSArray* _alertActionViewControllers;
	NSArray* _alertActionTypes;
	NSArray* _activityActions;
	NSSet* _disabledActionTypes;
	NSSet* _excludedActionTypes;
	NSArray* _actionManagers;

}

@property (nonatomic,readonly) NSArray * availableActionTypes; 
@property (nonatomic,readonly) NSArray * actionManagers;                          //@synthesize actionManagers=_actionManagers - In the implementation block
@property (nonatomic,copy) NSSet * disabledActionTypes;                           //@synthesize disabledActionTypes=_disabledActionTypes - In the implementation block
@property (nonatomic,copy) NSSet * excludedActionTypes;                           //@synthesize excludedActionTypes=_excludedActionTypes - In the implementation block
@property (nonatomic,readonly) NSArray * alertActionTypes;                        //@synthesize alertActionTypes=_alertActionTypes - In the implementation block
@property (nonatomic,readonly) NSArray * alertActions;                            //@synthesize alertActions=_alertActions - In the implementation block
@property (nonatomic,readonly) NSArray * alertActionViewControllers;              //@synthesize alertActionViewControllers=_alertActionViewControllers - In the implementation block
@property (nonatomic,readonly) NSArray * activityActions;                         //@synthesize activityActions=_activityActions - In the implementation block
@property (nonatomic,readonly) UIAlertController * alertController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIAlertController *)alertController;
-(id)initWithActionManagers:(id)arg1 ;
-(NSArray *)availableActionTypes;
-(BOOL)shouldAllowPerformanceOfActionType:(id)arg1 ;
-(NSSet *)disabledActionTypes;
-(void)setDisabledActionTypes:(NSSet *)arg1 ;
-(void)setExcludedActionTypes:(NSSet *)arg1 ;
-(NSArray *)alertActions;
-(NSArray *)alertActionViewControllers;
-(NSArray *)activityActions;
-(NSArray *)alertActionTypes;
-(void)_updateActionsIfNeeded;
-(void)invalidateActions;
-(NSSet *)excludedActionTypes;
-(NSArray *)actionManagers;
@end

