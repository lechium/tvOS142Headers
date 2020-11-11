/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLContentRating : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (nonatomic,retain) NSNumber * ratingRank; 
@property (nonatomic,copy) NSString * ratingSystem; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSNumber *)ratingRank;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingDescription;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)ratingSystem;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(void)setRatingSystem:(NSString *)arg1 ;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(id)initWithContentRatingDictionary:(id)arg1 ;
-(void)setRatingRank:(NSNumber *)arg1 ;
-(id)copyStringRepresentation;
@end

