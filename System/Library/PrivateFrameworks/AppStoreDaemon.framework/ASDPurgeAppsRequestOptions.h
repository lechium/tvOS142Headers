/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions {

	BOOL _offloadOnly;
	BOOL _performAvailablityCheck;
	NSArray* _apps;
	NSNumber* _desiredPurgeAmount;
	long long _urgency;
	NSString* _volume;

}

@property (nonatomic,copy) NSArray * apps;                              //@synthesize apps=_apps - In the implementation block
@property (nonatomic,copy) NSNumber * desiredPurgeAmount;               //@synthesize desiredPurgeAmount=_desiredPurgeAmount - In the implementation block
@property (assign,nonatomic) BOOL offloadOnly;                          //@synthesize offloadOnly=_offloadOnly - In the implementation block
@property (assign,nonatomic) BOOL performAvailablityCheck;              //@synthesize performAvailablityCheck=_performAvailablityCheck - In the implementation block
@property (assign,nonatomic) long long urgency;                         //@synthesize urgency=_urgency - In the implementation block
@property (nonatomic,copy) NSString * volume;                           //@synthesize volume=_volume - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)apps;
-(void)setApps:(NSArray *)arg1 ;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(void)setUrgency:(long long)arg1 ;
-(long long)urgency;
-(BOOL)performAvailablityCheck;
-(id)initWithVolume:(id)arg1 urgency:(long long)arg2 ;
-(void)setPerformAvailablityCheck:(BOOL)arg1 ;
-(NSNumber *)desiredPurgeAmount;
-(BOOL)offloadOnly;
-(void)setDesiredPurgeAmount:(NSNumber *)arg1 ;
-(void)setOffloadOnly:(BOOL)arg1 ;
@end

