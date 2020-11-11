/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiCandidateNetwork.h>

@protocol TBScore;
@class NSString, NSSet, NSDate;

@interface WiFiWalletPass : NSObject <WiFiCandidateNetwork> {

	BOOL matched;
	unsigned venueType;
	NSString* SSID;
	NSString* password;
	NSSet* attributes;
	NSSet* accessPoints;
	id<TBScore> qualityScore;
	id<TBScore> popularityScore;
	unsigned long long venueGroup;
	unsigned long long type;
	NSString* _uniqueIdentifier;
	NSString* _serialNumber;
	NSDate* _relevantDate;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                        //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSDate * relevantDate;                          //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * SSID; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSSet * attributes; 
@property (assign,nonatomic) BOOL matched; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore; 
@property (nonatomic,readonly) id<TBScore> qualityScore; 
-(NSString *)description;
-(NSString *)localizedDescription;
-(NSString *)password;
-(unsigned long long)type;
-(long long)source;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSSet *)attributes;
-(void)setPassword:(NSString *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(NSSet *)accessPoints;
-(unsigned long long)venueGroup;
-(unsigned)venueType;
-(void)setSSID:(NSString *)arg1 ;
-(NSString *)SSID;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(NSDate *)relevantDate;
-(id<TBScore>)qualityScore;
-(void)setMatched:(BOOL)arg1 ;
-(id<TBScore>)popularityScore;
-(BOOL)containsAccessPointMatchingBSSIDs:(id)arg1 ;
-(BOOL)matched;
@end
