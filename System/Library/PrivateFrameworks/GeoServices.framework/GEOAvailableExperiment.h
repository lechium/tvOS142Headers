/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray, NSArray;

@interface GEOAvailableExperiment : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSMutableArray* _branches;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * branches;                 //@synthesize branches=_branches - In the implementation block
-(NSString *)name;
-(id)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(void)_addBranch:(id)arg1 ;
-(id)_branchForLabel:(id)arg1 ;
-(NSArray *)branches;
@end
