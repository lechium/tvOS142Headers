/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSURL, NSString, NSDictionary;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding> {

	BOOL _parsingStandaloneMessage;
	NSDate* _timestamp;
	NSURL* _url;
	NSString* _method;
	long long _status;
	NSDictionary* _headers;
	NSString* _requestClassName;

}

@property (nonatomic,retain) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * method;                          //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSString * requestClassName;                //@synthesize requestClassName=_requestClassName - In the implementation block
@property (assign,nonatomic) BOOL parsingStandaloneMessage;              //@synthesize parsingStandaloneMessage=_parsingStandaloneMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSString *)method;
-(long long)status;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSString *)requestClassName;
-(void)setRequestClassName:(NSString *)arg1 ;
-(BOOL)parsingStandaloneMessage;
-(void)setParsingStandaloneMessage:(BOOL)arg1 ;
@end

