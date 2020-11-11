/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSNumber, NSDate, NSString;


@protocol ICStorePlatformResponse <NSCopying,NSObject>
@property (nonatomic,copy,readonly) NSArray * allItems; 
@property (nonatomic,copy,readonly) NSNumber * accountIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * enqueuerAccountIdentifier; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
@property (nonatomic,copy,readonly) id rawResponse; 
@required
-(NSDate *)expirationDate;
-(NSNumber *)accountIdentifier;
-(NSArray *)allItems;
-(id)rawResponse;
-(NSString *)storefrontIdentifier;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1;
-(NSNumber *)enqueuerAccountIdentifier;
-(id)itemForIdentifier:(id)arg1;

@end
