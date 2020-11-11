/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAVCSContentShelfUpdateInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long pageNumber; 
@property (nonatomic,copy) NSString * targetShelfViewId; 
@property (nonatomic,copy) NSString * targetViewId; 
@property (nonatomic,copy) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentShelfUpdateInfo;
+(id)contentShelfUpdateInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)pageNumber;
-(void)setPageNumber:(long long)arg1 ;
-(NSString *)targetShelfViewId;
-(void)setTargetShelfViewId:(NSString *)arg1 ;
-(NSString *)targetViewId;
-(void)setTargetViewId:(NSString *)arg1 ;
@end

