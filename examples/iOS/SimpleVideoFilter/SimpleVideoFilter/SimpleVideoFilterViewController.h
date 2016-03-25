#import <UIKit/UIKit.h>
#import "GPUImage.h"

@interface SimpleVideoFilterViewController : UIViewController
{
    GPUImageVideoCamera *videoCamera;
    GPUImageOutput<GPUImageInput> *filter;
    GPUImageMovieWriter *movieWriter;
    GPUImageVideoOverlayOutput *overlay;
}

- (IBAction)updateSliderValue:(id)sender;

@end
