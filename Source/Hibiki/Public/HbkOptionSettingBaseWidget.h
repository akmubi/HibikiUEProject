#pragma once
#include "CoreMinimal.h"
#include "HbkWindowBaseWidget.h"
#include "HbkOptionSettingBaseWidget.generated.h"

class UAkAudioEvent;
class UHbkOptionCommonBackgroundWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionSettingBaseWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionCommonBackgroundWidget* CommonBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* PrevDisplayWidget;
    
public:
    UHbkOptionSettingBaseWidget();

};

