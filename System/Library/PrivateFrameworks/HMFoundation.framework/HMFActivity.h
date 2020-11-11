/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFActivityMarking.h>

@protocol OS_os_activity, OS_voucher;
@class NSObject, NSMutableSet, NSUUID, NSString, NSArray, NSDate, HMFLogEventSession;

@interface HMFActivity : HMFObject <HMFLogging, HMFObject, HMFActivityMarking> {

	NSObject*<OS_os_activity> _internal;
	NSObject*<OS_voucher> _voucher;
	NSMutableSet* _threadContexts;
	os_unfair_lock_s _lock;
	BOOL _valid;
	NSUUID* _identifier;
	HMFActivity* _parent;
	NSString* _name;
	unsigned long long _options;
	NSArray* _internalAssertions;
	NSDate* _startDate;

}

@property (getter=isEventReportingEnabled) BOOL eventReportingEnabled; 
@property (readonly) HMFLogEventSession * logSession; 
@property (copy,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (__weak,readonly) HMFActivity * parent;                                   //@synthesize parent=_parent - In the implementation block
@property (copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long assertions; 
@property (readonly) unsigned long long options;                                    //@synthesize options=_options - In the implementation block
@property (getter=isValid,readonly) BOOL valid;                                     //@synthesize valid=_valid - In the implementation block
@property (getter=hasStarted,readonly) BOOL started; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(void)initialize;
+(id)bundleIdentifier;
+(id)shortDescription;
+(id)logCategory;
+(void)activityWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
+(id)currentActivityForMarking;
+(void)activityWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)activityWithName:(id)arg1 parent:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
+(id)currentActivity;
+(void)markCurrentActivity;
+(void)markCurrentActivityWithReason:(id)arg1 ;
+(void)markCurrentActivityWithFormat:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)identifier;
-(unsigned long long)options;
-(BOOL)hasStarted;
-(void)performBlock:(/*^block*/id)arg1 ;
-(HMFActivity *)parent;
-(void)end;
-(void)begin;
-(NSString *)shortDescription;
-(unsigned long long)assertions;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
-(id)logIdentifier;
-(void)mark;
-(NSArray *)attributeDescriptions;
-(void)enableReportingWithServiceName:(id)arg1 ;
-(BOOL)isEventReportingEnabled;
-(HMFLogEventSession *)logSession;
-(void)setEventReportingEnabled:(BOOL)arg1 ;
-(void)enableReportingWithServiceName:(id)arg1 rootUUID:(id)arg2 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 ;
-(void)markWithReason:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 parent:(id)arg3 options:(unsigned long long)arg4 ;
-(void)markWithFormat:(id)arg1 ;
-(/*^block*/id)blockWithBlock:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 ;
-(/*^block*/id)blockWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
@end

