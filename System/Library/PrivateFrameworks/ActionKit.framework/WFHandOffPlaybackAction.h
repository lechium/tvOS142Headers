/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFHandOffPlaybackAction : WFAction
-(id)localEndpoint;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)runWhenInvokedThroughHomePodWithSpecifiedDescriptor:(id)arg1 picker:(id)arg2 ;
-(void)runWhenInvokedThroughLocalDeviceWithSpecifiedDescriptor:(id)arg1 picker:(id)arg2 ;
-(void)runWithSourceRouteUID:(id)arg1 destinationRouteUID:(id)arg2 routePicker:(id)arg3 ;
-(id)invokingHomePodRouteDescriptor;
-(void)findInvokingHomePodEndpointWithRoutePicker:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)askForUserSpecificationOfMissingRouteWithRoutePicker:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)sourceRouteDescriptor;
-(id)destinationRouteDescriptor;
-(id)errorFromRoutePickerError:(id)arg1 ;
-(id)errorUserInfoForRoutePickerErrorCode:(long long)arg1 involvedRouteName:(id)arg2 ;
@end

