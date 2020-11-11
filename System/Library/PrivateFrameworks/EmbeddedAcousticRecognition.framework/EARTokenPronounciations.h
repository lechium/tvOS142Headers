/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString, NSArray;

@interface EARTokenPronounciations : NSObject {

	NSString* _token;
	NSArray* _pronunciations;

}

@property (nonatomic,copy) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSArray * pronunciations;              //@synthesize pronunciations=_pronunciations - In the implementation block
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSArray *)pronunciations;
-(void)setPronunciations:(NSArray *)arg1 ;
-(id)initWithToken:(id)arg1 pronunciations:(id)arg2 ;
-(TokenProns*)_quasarProns;
@end

