/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction {

	NSArray* _contentClasses;

}

@property (nonatomic,retain) NSArray * contentClasses;              //@synthesize contentClasses=_contentClasses - In the implementation block
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 ;
-(id)targetContentAttribution;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)openContentInSelectedApp:(id)arg1 ;
-(void)updateContentClasses;
-(id)inputContentClasses;
-(id)outputContentClasses;
-(id)selectedApp;
-(NSArray *)contentClasses;
-(void)setContentClasses:(NSArray *)arg1 ;
@end
