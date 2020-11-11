/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURL;

@interface ICInAppMessageConfiguration : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSURL * reportEventURL; 
@property (nonatomic,readonly) NSURL * serialCheckURL; 
@property (nonatomic,readonly) NSURL * syncURL; 
@property (nonatomic,readonly) NSURL * resourceDomainURL; 
@property (nonatomic,readonly) long long syncPollingInterval; 
-(id)initWithDictionary:(id)arg1 ;
-(long long)syncPollingInterval;
-(NSURL *)resourceDomainURL;
-(NSURL *)reportEventURL;
-(NSURL *)serialCheckURL;
-(NSURL *)syncURL;
@end

