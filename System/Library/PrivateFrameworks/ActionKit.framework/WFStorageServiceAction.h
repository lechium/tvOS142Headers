/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFStorageServiceAction : WFAction

@property (nonatomic,readonly) id<WFFileStorageService> selectedStorageService; 
@property (nonatomic,readonly) BOOL showsFilePicker; 
-(id)keywords;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)requiresRemoteExecution;
-(id)targetContentAttribution;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2 ;
-(id)filenamePlaceholderText;
-(id)prioritizedParameterKeysForRemoteExecution;
-(id<WFFileStorageService>)selectedStorageService;
-(BOOL)showsFilePicker;
-(id)requiredResources;
-(BOOL)showsSettingsWhenResourcesUnavailable;
-(void)updatePathPrefix;
-(id)filePathKey;
-(id)showPickerKey;
-(void)selectedStorageServiceChanged;
@end

