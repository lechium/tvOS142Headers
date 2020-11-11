/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PXMiniHTMLParser : NSObject {

	/*^block*/id _parsedCharactersBlock;
	/*^block*/id _parsedMarkupElementStartBlock;
	/*^block*/id _parsedMarkupElementEndBlock;
	/*^block*/id _parsedErrorBlock;
	NSString* __string;

}

@property (nonatomic,readonly) NSString * _string;                        //@synthesize _string=__string - In the implementation block
@property (nonatomic,copy) id parsedCharactersBlock;                      //@synthesize parsedCharactersBlock=_parsedCharactersBlock - In the implementation block
@property (nonatomic,copy) id parsedMarkupElementStartBlock;              //@synthesize parsedMarkupElementStartBlock=_parsedMarkupElementStartBlock - In the implementation block
@property (nonatomic,copy) id parsedMarkupElementEndBlock;                //@synthesize parsedMarkupElementEndBlock=_parsedMarkupElementEndBlock - In the implementation block
@property (nonatomic,copy) id parsedErrorBlock;                           //@synthesize parsedErrorBlock=_parsedErrorBlock - In the implementation block
+(id)stringByConvertingToHTML:(id)arg1 ;
+(id)charactersForEntityNames;
-(id)init;
-(id)initWithString:(id)arg1 ;
-(NSString *)_string;
-(void)parse;
-(id)parsedErrorBlock;
-(void)setParsedErrorBlock:(id)arg1 ;
-(id)parsedCharactersBlock;
-(void)setParsedCharactersBlock:(id)arg1 ;
-(id)parsedMarkupElementStartBlock;
-(void)setParsedMarkupElementStartBlock:(id)arg1 ;
-(id)parsedMarkupElementEndBlock;
-(void)setParsedMarkupElementEndBlock:(id)arg1 ;
@end

