/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, NSArray;

@interface CATResult : NSObject {

	NSString* _catId;
	NSDictionary* _meta;
	NSArray* _speak;
	NSArray* _print;
	NSArray* _dialogId;
	NSArray* _captionSpeak;
	NSArray* _captionPrint;
	NSArray* _printOnly;
	NSArray* _spokenOnly;

}

@property (nonatomic,retain) NSString * catId;                    //@synthesize catId=_catId - In the implementation block
@property (nonatomic,retain) NSDictionary * meta;                 //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSArray * speak;                     //@synthesize speak=_speak - In the implementation block
@property (nonatomic,retain) NSArray * print;                     //@synthesize print=_print - In the implementation block
@property (nonatomic,retain) NSArray * dialogId;                  //@synthesize dialogId=_dialogId - In the implementation block
@property (nonatomic,retain) NSArray * captionSpeak;              //@synthesize captionSpeak=_captionSpeak - In the implementation block
@property (nonatomic,retain) NSArray * captionPrint;              //@synthesize captionPrint=_captionPrint - In the implementation block
@property (nonatomic,retain) NSArray * printOnly;                 //@synthesize printOnly=_printOnly - In the implementation block
@property (nonatomic,retain) NSArray * spokenOnly;                //@synthesize spokenOnly=_spokenOnly - In the implementation block
-(void)setMeta:(NSDictionary *)arg1 ;
-(NSDictionary *)meta;
-(NSArray *)speak;
-(void)setSpeak:(NSArray *)arg1 ;
-(NSArray *)dialogId;
-(void)setDialogId:(NSArray *)arg1 ;
-(NSArray *)spokenOnly;
-(void)setSpokenOnly:(NSArray *)arg1 ;
-(NSArray *)print;
-(void)setPrint:(NSArray *)arg1 ;
-(NSString *)catId;
-(void)setCatId:(NSString *)arg1 ;
-(NSArray *)captionSpeak;
-(void)setCaptionSpeak:(NSArray *)arg1 ;
-(NSArray *)captionPrint;
-(void)setCaptionPrint:(NSArray *)arg1 ;
-(NSArray *)printOnly;
-(void)setPrintOnly:(NSArray *)arg1 ;
@end

