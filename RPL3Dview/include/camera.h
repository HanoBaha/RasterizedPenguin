#include "RPTypes.h"

class Camera {
    public:
        Camera(int2 screenSize, int nearScreen, int farScreen, float hFOV, bool toScreen, Color* colorBuffer, float3* normBuffer);

        float3 pos;
        int* depthBuffer;

        void setPos(const float3 newPos);
        void movePos(const float3 displacement);

        void setRot(const float2 angle);
        void rotate(const float2 angle, const float3 axe);
        float3 getDir() const;

        void render(Mesh* obj, bool toScreen);


    private:
        float3 dir;
        float2 angle;

        float nearScreen;
        float farScreen;
        float2 FOV;
        
        Color* colorBuffer;
        float3* normBuffer;
};