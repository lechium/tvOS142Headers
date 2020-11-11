/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFMediaRoutePickerObserver.h>

@class WFMediaRoutePicker, WFMediaRouteDescriptor, WFDispatchSourceTimer;

@interface WFMediaRouteFinder : NSObject <WFMediaRoutePickerObserver> {

	WFMediaRoutePicker* _picker;
	/*^block*/id _completionHandler;
	WFMediaRouteDescriptor* _routeDescriptor;
	double _timeout;
	WFDispatchSourceTimer* _timer;

}

@property (nonatomic,readonly) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) WFMediaRouteDescriptor * routeDescriptor;              //@synthesize routeDescriptor=_routeDescriptor - In the implementation block
@property (nonatomic,readonly) double timeout;                                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) WFDispatchSourceTimer * timer;                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,__weak,readonly) WFMediaRoutePicker * picker;                    //@synthesize picker=_picker - In the implementation block
-(void)start;
-(double)timeout;
-(id)completionHandler;
-(WFDispatchSourceTimer *)timer;
-(WFMediaRoutePicker *)picker;
-(WFMediaRouteDescriptor *)routeDescriptor;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg1 ;
-(id)initWithPicker:(id)arg1 routeDescriptor:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)finishWithMatchingRoute:(id)arg1 error:(id)arg2 ;
@end

