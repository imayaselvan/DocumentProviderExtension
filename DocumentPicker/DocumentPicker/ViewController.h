//
//  ViewController.h
//  DocumentPicker
//
//  Created by imayaselvan r. on 14/11/14.
//  Copyright (c) 2014 imayaselvan r. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIDocumentMenuDelegate,UIDocumentPickerDelegate,UIWebViewDelegate>
{
     UIWebView *FilePreview;
}
-(IBAction)enableDocumentPicker:(id)sender;
@end

