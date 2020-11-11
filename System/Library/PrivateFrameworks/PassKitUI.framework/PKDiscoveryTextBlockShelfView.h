/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDiscoveryShelfView.h>

@class UILabel, PKDiscoveryTextBlockShelf, NSAttributedString;

@interface PKDiscoveryTextBlockShelfView : PKDiscoveryShelfView {

	UILabel* _bodyLabel;
	PKDiscoveryTextBlockShelf* _shelf;
	NSAttributedString* _attributedText;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithShelf:(id)arg1 ;
-(id)_attributedStringForBody:(id)arg1 lede:(id)arg2 headerline:(id)arg3 ;
-(id)_uiFontTextStyle;
-(id)_textColorForBody;
-(id)_textColorForLede;
-(id)_textColorForHeaderline;
@end
