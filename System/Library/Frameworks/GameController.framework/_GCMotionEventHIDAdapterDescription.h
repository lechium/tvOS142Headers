/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCMotionEventSourceDescription.h>

@protocol _GCHIDEventSourceDescription;
@class _GCCControllerHIDServiceInfoDescription, _GCMotionEventHIDAdapter, NSString;

@interface _GCMotionEventHIDAdapterDescription : NSObject <_GCMotionEventSourceDescription> {

	id<_GCHIDEventSourceDescription> _sourceDescription;
	_GCCControllerHIDServiceInfoDescription* _serviceDescription;
	_GCMotionEventHIDAdapter* _materializedObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSource:(id)arg1 service:(id)arg2 ;
-(id)materializeWithContext:(id)arg1 ;
@end

