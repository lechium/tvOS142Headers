/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString, NSURL;

@interface SAWLWatchListChannelDetails : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * appIconDynamicImage; 
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,copy) NSURL * appStoreURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListChannelDetails;
+(id)watchListChannelDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)appStoreURL;
-(void)setAppStoreURL:(NSURL *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSData *)appIconDynamicImage;
-(void)setAppIconDynamicImage:(NSData *)arg1 ;
@end
