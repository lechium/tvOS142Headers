/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/CIGVRenderer.h>

@class NSString;

@interface CGRenderer : NSObject <CIGVRenderer> {

	CGContextRef context;
	BOOL drawEdgesFirst;
	BOOL drawWithSplines;
	int direction;
	CGSize separation;

}

@property (assign) BOOL drawWithSplines; 
@property (assign) int direction; 
@property (assign) CGSize separation; 
@property (assign) BOOL drawEdgesFirst; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setFileURL:(id)arg1 ;
-(int)direction;
-(CGSize)separation;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)setDirection:(int)arg1 ;
-(void)setSeparation:(CGSize)arg1 ;
-(void)drawNode:(id)arg1 ;
-(void)drawEdge:(id)arg1 withPath:(id)arg2 ;
-(BOOL)drawEdgesFirst;
-(CGColorRef)_colorForNodeColor:(int)arg1 ;
-(void)_drawNodeContent:(id)arg1 ;
-(void)_drawNodeBadge:(id)arg1 ;
-(void)hyperlinkEdge:(id)arg1 from:(CGPoint)arg2 to:(CGPoint)arg3 ;
-(void)_drawCubicSpline:(id)arg1 ;
-(void)_drawPolyline:(id)arg1 ;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(void)setDrawEdgesFirst:(BOOL)arg1 ;
-(BOOL)drawWithSplines;
-(void)setDrawWithSplines:(BOOL)arg1 ;
@end
