/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary, NSDate;


@protocol PXDisplaySuggestion <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short subtype; 
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSDictionary * actionProperties; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@required
-(unsigned short)type;
-(unsigned short)state;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(unsigned short)subtype;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(NSString *)localIdentifier;
-(NSDictionary *)actionProperties;
-(id)fetchKeyAssets;

@end

