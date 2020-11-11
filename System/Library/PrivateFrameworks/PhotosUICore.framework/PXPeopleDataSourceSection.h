/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PXPeopleDataSourceSection : NSObject {

	BOOL _disclosed;
	unsigned long long _personFetchType;
	NSString* _disclosedTitle;
	NSString* _unDisclosedTitle;

}

@property (nonatomic,readonly) unsigned long long personFetchType;              //@synthesize personFetchType=_personFetchType - In the implementation block
@property (getter=isDisclosed) BOOL disclosed;                                  //@synthesize disclosed=_disclosed - In the implementation block
@property (nonatomic,copy) NSString * disclosedTitle;                           //@synthesize disclosedTitle=_disclosedTitle - In the implementation block
@property (nonatomic,copy) NSString * unDisclosedTitle;                         //@synthesize unDisclosedTitle=_unDisclosedTitle - In the implementation block
-(BOOL)isDisclosed;
-(void)setDisclosed:(BOOL)arg1 ;
-(id)initWithPersonFetchType:(unsigned long long)arg1 ;
-(unsigned long long)personFetchType;
-(NSString *)disclosedTitle;
-(void)setDisclosedTitle:(NSString *)arg1 ;
-(NSString *)unDisclosedTitle;
-(void)setUnDisclosedTitle:(NSString *)arg1 ;
@end

