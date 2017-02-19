//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UIWebView;

@interface LECPlayerWebViewController : UIViewController
{
    id <LECPlayerWebViewControllerDelegate> _delegate;
    NSString *_webUrl;
    UIWebView *_webView;
    UIButton *_closeBtn;
}

@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(nonatomic) __weak id <LECPlayerWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)clickToClose:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 webUrl:(id)arg3;

@end
