/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASItnAlignment : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long firstPostItnCharPos; 
@property (assign,nonatomic) long long firstPreItnTokenIndex; 
@property (assign,nonatomic) long long lastPostItnCharPos; 
@property (assign,nonatomic) long long lastPreItnTokenIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itnAlignment;
+(id)itnAlignmentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)firstPostItnCharPos;
-(void)setFirstPostItnCharPos:(long long)arg1 ;
-(long long)firstPreItnTokenIndex;
-(void)setFirstPreItnTokenIndex:(long long)arg1 ;
-(long long)lastPostItnCharPos;
-(void)setLastPostItnCharPos:(long long)arg1 ;
-(long long)lastPreItnTokenIndex;
-(void)setLastPreItnTokenIndex:(long long)arg1 ;
@end

