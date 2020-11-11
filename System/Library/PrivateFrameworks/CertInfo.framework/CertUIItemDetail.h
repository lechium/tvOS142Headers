/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIColor;

@interface CertUIItemDetail : NSObject {

	BOOL _showCheckmarkView;
	BOOL _showCheckmark;
	NSString* _detailTitle;
	NSString* _detail;
	UIColor* _detailHighlightColor;
	NSString* _checkmarkText;
	UIColor* _checkmarkHighlightColor;

}

@property (nonatomic,retain) NSString * detailTitle;                         //@synthesize detailTitle=_detailTitle - In the implementation block
@property (nonatomic,retain) NSString * detail;                              //@synthesize detail=_detail - In the implementation block
@property (nonatomic,retain) UIColor * detailHighlightColor;                 //@synthesize detailHighlightColor=_detailHighlightColor - In the implementation block
@property (assign,nonatomic) BOOL showCheckmarkView;                         //@synthesize showCheckmarkView=_showCheckmarkView - In the implementation block
@property (nonatomic,retain) NSString * checkmarkText;                       //@synthesize checkmarkText=_checkmarkText - In the implementation block
@property (nonatomic,retain) UIColor * checkmarkHighlightColor;              //@synthesize checkmarkHighlightColor=_checkmarkHighlightColor - In the implementation block
@property (assign,nonatomic) BOOL showCheckmark;                             //@synthesize showCheckmark=_showCheckmark - In the implementation block
+(id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 ;
+(id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 ;
+(id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(BOOL)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(BOOL)arg7 ;
-(NSString *)detail;
-(void)setDetail:(NSString *)arg1 ;
-(void)setDetailTitle:(NSString *)arg1 ;
-(NSString *)detailTitle;
-(UIColor *)detailHighlightColor;
-(BOOL)showCheckmarkView;
-(NSString *)checkmarkText;
-(UIColor *)checkmarkHighlightColor;
-(BOOL)showCheckmark;
-(id)initWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(BOOL)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(BOOL)arg7 ;
-(void)setDetailHighlightColor:(UIColor *)arg1 ;
-(void)setShowCheckmarkView:(BOOL)arg1 ;
-(void)setCheckmarkText:(NSString *)arg1 ;
-(void)setCheckmarkHighlightColor:(UIColor *)arg1 ;
-(void)setShowCheckmark:(BOOL)arg1 ;
@end

