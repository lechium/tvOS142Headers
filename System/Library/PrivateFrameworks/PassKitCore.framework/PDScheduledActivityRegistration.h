/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSSecureCoding;
@class PDScheduledActivityCriteria;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding> {

	PDScheduledActivityCriteria* _activityCriteria;
	id<NSObject><NSSecureCoding> _activityContext;

}

@property (nonatomic,readonly) PDScheduledActivityCriteria * activityCriteria;              //@synthesize activityCriteria=_activityCriteria - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSSecureCoding> activityContext;                //@synthesize activityContext=_activityContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PDScheduledActivityCriteria *)activityCriteria;
-(BOOL)isEqualToScheduledActivityRegistration:(id)arg1 ;
-(id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2 ;
-(id<NSObject><NSSecureCoding>)activityContext;
@end

