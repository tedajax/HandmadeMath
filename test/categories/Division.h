#include "../HandmadeTest.h"

TEST(Division, Vec2Vec2)
{
    Vec2 v2_1 = V2(1.0f, 3.0f);
    Vec2 v2_2 = V2(2.0f, 4.0f);

    {
        Vec2 result = DivV2(v2_1, v2_2);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
    }
#ifdef __cplusplus
    {
        Vec2 result = Div(v2_1, v2_2);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
    }
    {
        Vec2 result = v2_1 / v2_2;
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
    }

    v2_1 /= v2_2;
    EXPECT_FLOAT_EQ(v2_1.X, 0.5f);
    EXPECT_FLOAT_EQ(v2_1.Y, 0.75f);
#endif
}

TEST(Division, Vec2Scalar)
{
    Vec2 v2 = V2(1.0f, 2.0f);
    float s = 2;

    {
        Vec2 result = DivV2F(v2, s);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
    }
#ifdef __cplusplus
    {
        Vec2 result = Div(v2, s);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
    }
    {
        Vec2 result = v2 / s;
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
    }

    v2 /= s;
    EXPECT_FLOAT_EQ(v2.X, 0.5f);
    EXPECT_FLOAT_EQ(v2.Y, 1.0f);
#endif
}

TEST(Division, Vec3Vec3)
{
    Vec3 v3_1 = V3(1.0f, 3.0f, 5.0f);
    Vec3 v3_2 = V3(2.0f, 4.0f, 0.5f);

    {
        Vec3 result = DivV3(v3_1, v3_2);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
        EXPECT_FLOAT_EQ(result.Z, 10.0f);
    }
#ifdef __cplusplus
    {
        Vec3 result = Div(v3_1, v3_2);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
        EXPECT_FLOAT_EQ(result.Z, 10.0f);
    }
    {
        Vec3 result = v3_1 / v3_2;
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
        EXPECT_FLOAT_EQ(result.Z, 10.0f);
    }

    v3_1 /= v3_2;
    EXPECT_FLOAT_EQ(v3_1.X, 0.5f);
    EXPECT_FLOAT_EQ(v3_1.Y, 0.75f);
    EXPECT_FLOAT_EQ(v3_1.Z, 10.0f);
#endif
}

TEST(Division, Vec3Scalar)
{
    Vec3 v3 = V3(1.0f, 2.0f, 3.0f);
    float s = 2;

    {
        Vec3 result = DivV3F(v3, s);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
    }
#ifdef __cplusplus
    {
        Vec3 result = Div(v3, s);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
    }
    {
        Vec3 result = v3 / s;
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
    }

    v3 /= s;
    EXPECT_FLOAT_EQ(v3.X, 0.5f);
    EXPECT_FLOAT_EQ(v3.Y, 1.0f);
    EXPECT_FLOAT_EQ(v3.Z, 1.5f);
#endif
}

TEST(Division, Vec4Vec4)
{
    Vec4 v4_1 = V4(1.0f, 3.0f, 5.0f, 1.0f);
    Vec4 v4_2 = V4(2.0f, 4.0f, 0.5f, 4.0f);

    {
        Vec4 result = DivV4(v4_1, v4_2);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
        EXPECT_FLOAT_EQ(result.Z, 10.0f);
        EXPECT_FLOAT_EQ(result.W, 0.25f);
    }
#ifdef __cplusplus
    {
        Vec4 result = Div(v4_1, v4_2);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
        EXPECT_FLOAT_EQ(result.Z, 10.0f);
        EXPECT_FLOAT_EQ(result.W, 0.25f);
    }
    {
        Vec4 result = v4_1 / v4_2;
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 0.75f);
        EXPECT_FLOAT_EQ(result.Z, 10.0f);
        EXPECT_FLOAT_EQ(result.W, 0.25f);
    }

    v4_1 /= v4_2;
    EXPECT_FLOAT_EQ(v4_1.X, 0.5f);
    EXPECT_FLOAT_EQ(v4_1.Y, 0.75f);
    EXPECT_FLOAT_EQ(v4_1.Z, 10.0f);
    EXPECT_FLOAT_EQ(v4_1.W, 0.25f);
#endif
}

TEST(Division, Vec4Scalar)
{
    Vec4 v4 = V4(1.0f, 2.0f, 3.0f, 4.0f);
    float s = 2;

    {
        Vec4 result = DivV4F(v4, s);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
        EXPECT_FLOAT_EQ(result.W, 2.0f);
    }
#ifdef __cplusplus
    {
        Vec4 result = Div(v4, s);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
        EXPECT_FLOAT_EQ(result.W, 2.0f);
    }
    {
        Vec4 result = v4 / s;
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
        EXPECT_FLOAT_EQ(result.W, 2.0f);
    }

    v4 /= s;
    EXPECT_FLOAT_EQ(v4.X, 0.5f);
    EXPECT_FLOAT_EQ(v4.Y, 1.0f);
    EXPECT_FLOAT_EQ(v4.Z, 1.5f);
    EXPECT_FLOAT_EQ(v4.W, 2.0f);
#endif
}

TEST(Division, Mat2Scalar) 
{
    Mat2 m = M2();
    float s = 0.5f;

    int Counter = 1;
    for (int Column = 0; Column < 2; ++Column) {
        for (int Row = 0; Row < 2; ++Row) {
            m.Data[Column][Row] = Counter++;
        }
    }

    {
        Mat2 result = DivM2F(m, s);
        EXPECT_FLOAT_EQ(result.Data[0][0], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 8.0f);
    }

#ifdef __cplusplus
    {
        Mat2 result = Div(m, s);
        EXPECT_FLOAT_EQ(result.Data[0][0], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 8.0f);
    }

    {
        Mat2 result = m / s;
        EXPECT_FLOAT_EQ(result.Data[0][0], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 8.0f);
    }
#endif
}


TEST(Division, Mat3Scalar) 
{
    Mat3 m = M3();
    float s = 0.5f;

    int Counter = 1;
    for (int Column = 0; Column < 3; ++Column) {
        for (int Row = 0; Row < 3; ++Row) {
            m.Data[Column][Row] = Counter++;
        }
    }

    {
        Mat3 result = DivM3F(m, s);
        EXPECT_FLOAT_EQ(result.Data[0][0], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[0][2], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 8.0f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 10.0f);
        EXPECT_FLOAT_EQ(result.Data[1][2], 12.0f);
        EXPECT_FLOAT_EQ(result.Data[2][0], 14.0f);
        EXPECT_FLOAT_EQ(result.Data[2][1], 16.0f);
        EXPECT_FLOAT_EQ(result.Data[2][2], 18.0f);
    }

#ifdef __cplusplus
    {
        Mat3 result = Div(m, s);
        EXPECT_FLOAT_EQ(result.Data[0][0], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[0][2], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 8.0f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 10.0f);
        EXPECT_FLOAT_EQ(result.Data[1][2], 12.0f);
        EXPECT_FLOAT_EQ(result.Data[2][0], 14.0f);
        EXPECT_FLOAT_EQ(result.Data[2][1], 16.0f);
        EXPECT_FLOAT_EQ(result.Data[2][2], 18.0f);
    }

    {
        Mat3 result = m / s;
        EXPECT_FLOAT_EQ(result.Data[0][0], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[0][2], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 8.0f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 10.0f);
        EXPECT_FLOAT_EQ(result.Data[1][2], 12.0f);
        EXPECT_FLOAT_EQ(result.Data[2][0], 14.0f);
        EXPECT_FLOAT_EQ(result.Data[2][1], 16.0f);
        EXPECT_FLOAT_EQ(result.Data[2][2], 18.0f);
    }
#endif
}

TEST(Division, Mat4Scalar)
{
    Mat4 m4 = M4(); // will have 1 - 16
    float s = 2;

    // Fill the matrix
    int Counter = 1;
    for (int Column = 0; Column < 4; ++Column)
    {
        for (int Row = 0; Row < 4; ++Row)
        {
            m4.Data[Column][Row] = Counter;
            ++Counter;
        }
    }

    // Test the results
    {
        Mat4 result = DivM4F(m4, s);
        EXPECT_FLOAT_EQ(result.Data[0][0], 0.5f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 1.0f);
        EXPECT_FLOAT_EQ(result.Data[0][2], 1.5f);
        EXPECT_FLOAT_EQ(result.Data[0][3], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 2.5f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 3.0f);
        EXPECT_FLOAT_EQ(result.Data[1][2], 3.5f);
        EXPECT_FLOAT_EQ(result.Data[1][3], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[2][0], 4.5f);
        EXPECT_FLOAT_EQ(result.Data[2][1], 5.0f);
        EXPECT_FLOAT_EQ(result.Data[2][2], 5.5f);
        EXPECT_FLOAT_EQ(result.Data[2][3], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[3][0], 6.5f);
        EXPECT_FLOAT_EQ(result.Data[3][1], 7.0f);
        EXPECT_FLOAT_EQ(result.Data[3][2], 7.5f);
        EXPECT_FLOAT_EQ(result.Data[3][3], 8.0f);
    }
#ifdef __cplusplus
    {
        Mat4 result = Div(m4, s);
        EXPECT_FLOAT_EQ(result.Data[0][0], 0.5f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 1.0f);
        EXPECT_FLOAT_EQ(result.Data[0][2], 1.5f);
        EXPECT_FLOAT_EQ(result.Data[0][3], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 2.5f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 3.0f);
        EXPECT_FLOAT_EQ(result.Data[1][2], 3.5f);
        EXPECT_FLOAT_EQ(result.Data[1][3], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[2][0], 4.5f);
        EXPECT_FLOAT_EQ(result.Data[2][1], 5.0f);
        EXPECT_FLOAT_EQ(result.Data[2][2], 5.5f);
        EXPECT_FLOAT_EQ(result.Data[2][3], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[3][0], 6.5f);
        EXPECT_FLOAT_EQ(result.Data[3][1], 7.0f);
        EXPECT_FLOAT_EQ(result.Data[3][2], 7.5f);
        EXPECT_FLOAT_EQ(result.Data[3][3], 8.0f);
    }
    {
        Mat4 result = m4 / s;
        EXPECT_FLOAT_EQ(result.Data[0][0], 0.5f);
        EXPECT_FLOAT_EQ(result.Data[0][1], 1.0f);
        EXPECT_FLOAT_EQ(result.Data[0][2], 1.5f);
        EXPECT_FLOAT_EQ(result.Data[0][3], 2.0f);
        EXPECT_FLOAT_EQ(result.Data[1][0], 2.5f);
        EXPECT_FLOAT_EQ(result.Data[1][1], 3.0f);
        EXPECT_FLOAT_EQ(result.Data[1][2], 3.5f);
        EXPECT_FLOAT_EQ(result.Data[1][3], 4.0f);
        EXPECT_FLOAT_EQ(result.Data[2][0], 4.5f);
        EXPECT_FLOAT_EQ(result.Data[2][1], 5.0f);
        EXPECT_FLOAT_EQ(result.Data[2][2], 5.5f);
        EXPECT_FLOAT_EQ(result.Data[2][3], 6.0f);
        EXPECT_FLOAT_EQ(result.Data[3][0], 6.5f);
        EXPECT_FLOAT_EQ(result.Data[3][1], 7.0f);
        EXPECT_FLOAT_EQ(result.Data[3][2], 7.5f);
        EXPECT_FLOAT_EQ(result.Data[3][3], 8.0f);
    }

    m4 /= s;
    EXPECT_FLOAT_EQ(m4.Data[0][0], 0.5f);
    EXPECT_FLOAT_EQ(m4.Data[0][1], 1.0f);
    EXPECT_FLOAT_EQ(m4.Data[0][2], 1.5f);
    EXPECT_FLOAT_EQ(m4.Data[0][3], 2.0f);
    EXPECT_FLOAT_EQ(m4.Data[1][0], 2.5f);
    EXPECT_FLOAT_EQ(m4.Data[1][1], 3.0f);
    EXPECT_FLOAT_EQ(m4.Data[1][2], 3.5f);
    EXPECT_FLOAT_EQ(m4.Data[1][3], 4.0f);
    EXPECT_FLOAT_EQ(m4.Data[2][0], 4.5f);
    EXPECT_FLOAT_EQ(m4.Data[2][1], 5.0f);
    EXPECT_FLOAT_EQ(m4.Data[2][2], 5.5f);
    EXPECT_FLOAT_EQ(m4.Data[2][3], 6.0f);
    EXPECT_FLOAT_EQ(m4.Data[3][0], 6.5f);
    EXPECT_FLOAT_EQ(m4.Data[3][1], 7.0f);
    EXPECT_FLOAT_EQ(m4.Data[3][2], 7.5f);
    EXPECT_FLOAT_EQ(m4.Data[3][3], 8.0f);
#endif
}

TEST(Division, QuaternionScalar)
{
    Quat q = Q(1.0f, 2.0f, 3.0f, 4.0f);
    float f = 2.0f;

    {
        Quat result = DivQF(q, f);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
        EXPECT_FLOAT_EQ(result.W, 2.0f);
    }
#ifdef __cplusplus
    {
        Quat result = Div(q, f);
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
        EXPECT_FLOAT_EQ(result.W, 2.0f);
    }
    {
        Quat result = q / f;
        EXPECT_FLOAT_EQ(result.X, 0.5f);
        EXPECT_FLOAT_EQ(result.Y, 1.0f);
        EXPECT_FLOAT_EQ(result.Z, 1.5f);
        EXPECT_FLOAT_EQ(result.W, 2.0f);
    }

    q /= f;
    EXPECT_FLOAT_EQ(q.X, 0.5f);
    EXPECT_FLOAT_EQ(q.Y, 1.0f);
    EXPECT_FLOAT_EQ(q.Z, 1.5f);
    EXPECT_FLOAT_EQ(q.W, 2.0f);
#endif
}
