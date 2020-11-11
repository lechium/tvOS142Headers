/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSString, CFCBNightShiftSchedule;

@interface CFCBNightShiftStatus : SADomainCommand <SAAceSerializable>

@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * nightShiftMode; 
@property (nonatomic,retain) CFCBNightShiftSchedule * nightShiftSchedule; 
@property (assign,nonatomic) BOOL sunSchedulePermitted; 
@property (assign,nonatomic) BOOL supported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)nightShiftStatus;
+(id)nightShiftStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)groupIdentifier;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(BOOL)supported;
-(void)setSupported:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)nightShiftMode;
-(void)setNightShiftMode:(NSString *)arg1 ;
-(CFCBNightShiftSchedule *)nightShiftSchedule;
-(void)setNightShiftSchedule:(CFCBNightShiftSchedule *)arg1 ;
-(BOOL)sunSchedulePermitted;
-(void)setSunSchedulePermitted:(BOOL)arg1 ;
@end

