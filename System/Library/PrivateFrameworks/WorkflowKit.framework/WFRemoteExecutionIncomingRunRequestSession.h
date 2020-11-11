/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRemoteExecutionSession.h>
#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerDelegate.h>

@class WFOutOfProcessWorkflowController, NSSet, NSDictionary, NSString;

@interface WFRemoteExecutionIncomingRunRequestSession : WFRemoteExecutionSession <WFOutOfProcessWorkflowControllerDelegate> {

	WFOutOfProcessWorkflowController* _controller;
	NSSet* _lastKnownDestinations;
	NSDictionary* _lastKnownOptions;

}

@property (nonatomic,retain) NSSet * lastKnownDestinations;                              //@synthesize lastKnownDestinations=_lastKnownDestinations - In the implementation block
@property (nonatomic,retain) NSDictionary * lastKnownOptions;                            //@synthesize lastKnownOptions=_lastKnownOptions - In the implementation block
@property (nonatomic,retain) WFOutOfProcessWorkflowController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finish;
-(void)finishWithError:(id)arg1 ;
-(void)setController:(WFOutOfProcessWorkflowController *)arg1 ;
-(WFOutOfProcessWorkflowController *)controller;
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 reference:(id)arg4 dialogAttribution:(id)arg5 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(void)handleIncomingProtobuf:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(void)handleUnsupportedVersionForRequestData:(id)arg1 error:(id)arg2 destinations:(id)arg3 options:(id)arg4 ;
-(void)sendResponse:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 ;
-(void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2 metadata:(id)arg3 destinations:(id)arg4 options:(id)arg5 ;
-(NSSet *)lastKnownDestinations;
-(void)setLastKnownDestinations:(NSSet *)arg1 ;
-(NSDictionary *)lastKnownOptions;
-(void)setLastKnownOptions:(NSDictionary *)arg1 ;
@end

