/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSDate, NSNumber;

@interface _HKFitnessFriendAchievement : HKSample <NSCopying> {

	NSUUID* _friendUUID;
	NSString* _templateUniqueName;
	NSDate* _completedDate;
	NSNumber* _value;

}

@property (nonatomic,retain) NSUUID * friendUUID;                        //@synthesize friendUUID=_friendUUID - In the implementation block
@property (nonatomic,retain) NSString * templateUniqueName;              //@synthesize templateUniqueName=_templateUniqueName - In the implementation block
@property (nonatomic,retain) NSDate * completedDate;                     //@synthesize completedDate=_completedDate - In the implementation block
@property (nonatomic,retain) NSNumber * value;                           //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)achievementWithTemplateUniqueName:(id)arg1 completedDate:(id)arg2 value:(id)arg3 friendUUID:(id)arg4 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(NSUUID *)friendUUID;
-(void)setFriendUUID:(NSUUID *)arg1 ;
-(NSString *)templateUniqueName;
-(void)setTemplateUniqueName:(NSString *)arg1 ;
-(NSDate *)completedDate;
-(void)setCompletedDate:(NSDate *)arg1 ;
@end

