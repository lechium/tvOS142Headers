/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAddResultObjects : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * objects; 
@property (nonatomic,copy) NSArray * resultObjects; 
+(id)addResultObjects;
+(id)addResultObjectsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)objects;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setObjects:(NSArray *)arg1 ;
-(NSArray *)resultObjects;
-(void)setResultObjects:(NSArray *)arg1 ;
@end
