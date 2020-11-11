/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface IMDHandle : NSObject {

	NSString* _id;
	NSString* _unformattedID;
	NSString* _countryCode;
	NSString* _personCentricID;
	NSString* _CNContactID;

}

@property (nonatomic,retain) NSString * ID;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * unformattedID;                        //@synthesize unformattedID=_unformattedID - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * handleInfo; 
@property (nonatomic,retain) NSString * personCentricID;                      //@synthesize personCentricID=_personCentricID - In the implementation block
@property (nonatomic,copy) NSString * CNContactID;                            //@synthesize CNContactID=_CNContactID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)ID;
-(void)setID:(NSString *)arg1 ;
-(NSString *)unformattedID;
-(void)setUnformattedID:(NSString *)arg1 ;
-(void)setPersonCentricID:(NSString *)arg1 ;
-(NSString *)personCentricID;
-(long long)compareIDs:(id)arg1 ;
-(BOOL)isBusiness;
-(NSDictionary *)handleInfo;
-(BOOL)isBetterDefinedThan:(id)arg1 ;
-(NSString *)CNContactID;
-(void)setCNContactID:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 personCentricID:(id)arg4 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 ;
@end
