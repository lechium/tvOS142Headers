/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface ICRadioStationProviderResource : NSObject {

	NSURL* _url;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)bundleIdentifier;
-(NSURL *)url;
-(id)initWithRadioStationProviderResourceDictionary:(id)arg1 ;
@end

