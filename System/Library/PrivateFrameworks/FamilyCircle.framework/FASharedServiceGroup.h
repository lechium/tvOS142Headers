/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSArray;

@interface FASharedServiceGroup : NSObject {

	NSString* _headerText;
	NSString* _footerText;
	NSNumber* _groupID;
	NSArray* _services;

}

@property (nonatomic,retain) NSString * headerText;              //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSString * footerText;              //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,retain) NSNumber * groupID;                 //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSArray * services;                 //@synthesize services=_services - In the implementation block
-(id)description;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
-(id)initWithServerResponse:(id)arg1 ;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
@end

