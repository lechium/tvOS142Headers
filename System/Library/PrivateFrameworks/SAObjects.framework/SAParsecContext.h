/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSData, NSDictionary, NSString;

@interface SAParsecContext : SADomainObject

@property (nonatomic,copy) NSData * httpBody; 
@property (nonatomic,copy) NSDictionary * httpHeaders; 
@property (nonatomic,copy) NSString * httpMethod; 
@property (nonatomic,copy) NSString * httpUrl; 
+(id)parsecContext;
+(id)parsecContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)httpBody;
-(void)setHttpBody:(NSData *)arg1 ;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(NSString *)httpMethod;
-(void)setHttpMethod:(NSString *)arg1 ;
-(NSString *)httpUrl;
-(void)setHttpUrl:(NSString *)arg1 ;
@end

