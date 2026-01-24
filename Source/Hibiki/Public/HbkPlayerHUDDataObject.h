#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Components/SlateWrapperTypes.h"
#include "EHbkPlayerHUDWidgetType.h"
#include "HbkPlayerHUDDataObject.generated.h"

UCLASS(Abstract, Blueprintable)
class HIBIKI_API UHbkPlayerHUDDataObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerHUDWidgetType, ESlateVisibility> HUDVisibilitiesList;
    
    UHbkPlayerHUDDataObject();

};

